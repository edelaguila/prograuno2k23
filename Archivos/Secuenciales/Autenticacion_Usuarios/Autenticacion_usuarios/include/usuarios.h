#ifndef USUARIOS_H
#define USUARIOS_H
#include<iostream>

using std::string;

class usuarios
{
    public:
        usuarios();
        virtual ~usuarios();
        bool loginUsuarios();
        void menuUsuarios();
        bool buscar(string user, string passw);
    protected:

    private:
		string id,name,pass;

};

#endif // USUARIOS_H
