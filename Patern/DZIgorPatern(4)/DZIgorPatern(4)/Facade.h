#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class Word
{
	string word;
	string trsl;
public:
	Word(const string &w, const string &t) : word(w), trsl(t)
	{}
	void print() const
	{
		cout << word << " - " << trsl << endl;
	}
	string getWord() const
	{
		return word;

	}
	string getTrsl() const
	{
		return trsl;
	}
	bool Compare(const Word &w) const
	{
		if (word == w.word && trsl == w.trsl)
			return true;
		else
			return false;
	}
};

class CollWord
{
	vector<Word> words;
public:
	void addWord(const Word &word)
	{
		words.push_back(word);
	}
	void delWord(const Word &word)
	{
		for (int i = 0; i < words.size(); i++)
		{
			if (words[i].Compare(word))
			{
				swap(words[i], words[words.size() - 1]);
				words.pop_back();
				break;
			}
		}
	}
	int size() const
	{
		return words.size();
	}
	Word operator[](const int &i) const
	{
		if (i < 0 || i > words.size())
			return *(new Word("Err", "Err"));
		return words[i];
	}
	void print()
	{
		for (auto el : words)
			cout << el.getWord() << " - " << el.getTrsl() << endl;
	}
};

class Translator
{
	CollWord collWord;
public:
	Translator(const CollWord &coll) : collWord(coll)
	{}
	void setCollWord(const CollWord &coll)
	{
		collWord = coll;
	}
	void translate(const string &w)
	{
		for (int i = 0; i < collWord.size(); i++)
		{
			if (collWord[i].getWord() == w)
			{
				collWord[i].print();
				return;
			}
		}
	}
	void print()
	{
		for (int i = 0; i < collWord.size(); i++)
			collWord[i].print();
	}
};

class Note
{
	string way;
public:
	Note(const string &w) : way(w)
	{}
	void setWay(const string &w)
	{
		way = w;

	}
	void write(const CollWord &c)
	{
		ofstream fout(way);
		for (int i = 0; i < c.size(); i++)
			fout << c[i].getWord() << " " << c[i].getTrsl() << endl;
		cout << "End Write" << endl;
	}
	CollWord read()
	{
		ifstream fin(way);
		CollWord coll;
		while (!fin.eof())
		{
			string w1, w2;
			fin >> w1;
			fin >> w2;
			if (w1[0] == 0)
				break;
			coll.addWord(*(new Word(w1, w2)));
		}
		cout << "End Read" << endl;
		return coll;
	}
};

class Facade
{
	CollWord collWord;
	Translator trnsl;
	Note note;
public:
	Facade(const CollWord &coll, const string &w) : collWord(coll), trnsl(coll), note(w)
	{}
	void setCollWord(const CollWord &coll)
	{
		collWord = coll;
		trnsl.setCollWord(coll);

	}
	void translate(const string &w)
	{
		trnsl.translate(w);
	}
	void print()
	{
		trnsl.print();
	}
	void writeCollWord()
	{
		note.write(collWord);
	}
	void readCollWord()
	{
		collWord = note.read();
		trnsl.setCollWord(collWord);
	}
};
