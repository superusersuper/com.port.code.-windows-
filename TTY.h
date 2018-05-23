 #ifndef TTY_H
 #define TTY_H

 #define NOMINMAX //����� API windows ��������� ������� min � max, ������������� � std::max � std::min � vector
 #include <windows.h>

 #include <vector>
 #include <string>

 using namespace std;

 struct TTY {

 	TTY();
 	virtual ~TTY();

 	bool IsOK() const;

 	void Connect(const string& port, int baudrate);
 	void Disconnect();

 	virtual void Write(const vector<unsigned char>& data);
 	virtual void Read(vector<unsigned char>& data);

 	HANDLE m_Handle;

 };

 struct TTYException {
 };

 #endif
