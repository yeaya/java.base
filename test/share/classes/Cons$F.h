#ifndef _Cons$F_h_
#define _Cons$F_h_
//$ class Cons$F
//$ extends java.io.File

#include <java/io/File.h>

class $export Cons$F : public ::java::io::File {
	$class(Cons$F, $NO_CLASS_INIT, ::java::io::File)
public:
	Cons$F();
	void init$($String* path);
	void init$($String* parent, $String* child);
	void init$(::Cons$F* parent, $String* child);
	$String* exp = nullptr;
};

#endif // _Cons$F_h_