#ifndef CLASSTOFILE_H
#define CLASSTOFILE_H
    /*
    ifndef stands for "if not defined".
    The first pair of statements tells
    the program to define the
    classToFile header file if it has
    not been defined already.
    endif ends the condition.

    This prevents a header file from
    being included more than once
    within one file.
    */


class classToFile
{
    public:
        classToFile();
        ~classToFile();
        void myPrint() const;

    protected:

    private:
};

#endif // CLASSTOFILE_H
