class Quiz
{
private:
	string name;
	fstream resultsFile;
public:
	Quiz(string);
	string getName();
	void compile(string);
	void setName(string);
	~Quiz();
};
class TeacherQuiz : public Quiz
{
private:
	fstream answersFile;
public:
	~TeacherQuiz();
};
class StudentQuiz  : public Quiz
{
private:
	bool status;
public:
	void setStatus(bool);
};
