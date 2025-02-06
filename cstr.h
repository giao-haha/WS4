#ifndef SENECA_CSTR_H
#define SENECA_CSTR_H
namespace seneca {
	void freeMem(char*& mem);
	bool alocpy(char*& des, const char* src);
	unsigned int strlen(const char* src);
	void strcpy(char* des, const char* src);
	void strcpy(char* des, const char* src, unsigned int maxLen);
	int strcmp(const char* s1, const char* s2);
}

#endif // !SENECA_CSTR_H