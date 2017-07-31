#ifndef _QUESTION_HPP
#define _QUESTION_HPP

#include <string>
#include <iostream>
using  namespace  std;

class  Question

{
private:
	string m_questionText;
public: 
	void Display()
	{
	  cout << m_questionText << endl;
	}
	void SetQuestionText(string text)
	{
		m_questionText = text;
	}

};


class  TrueFalseQuestion : public  Question

{
private: 
	string m_correctAnswer;
public:
	void Display()
	{
		Question::Display();
		cout << "Enter True or False? " << endl;
	}
	void SetCorrectAnswer(string correctAnswer)
	{
		m_correctAnswer = correctAnswer;
	}
	bool CheckAnswer(string userAnswer)
	{
		//cin >> userAnswer;
		if (m_correctAnswer == userAnswer)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


class  MultipleChoiceQuestion : public  Question

{
private:
	string m_answers[4];
	int m_correctAnswer;
public:
	void Display()
	{
		Question::Display();
		for (int i = 0; i < 4; ++i)
		{
			cout << i << ". " << m_answers[i] << endl;
		}
	}
	void SetAnswerChoices(string a, string b, string c, string d)
	{
		m_answers[0] = a;
		m_answers[1] = b;
		m_answers[2] = c;
		m_answers[3] = d;
	}
	void SetCorrectAnswer(int correctAnswer)
	{
		m_correctAnswer = correctAnswer;
	}
	bool CheckAnswer(int userAnswer)
	{
		//m_correctAnswer = userAnswer;
		if (m_correctAnswer == userAnswer)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


#endif

