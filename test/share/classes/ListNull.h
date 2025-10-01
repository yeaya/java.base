#ifndef _ListNull_h_
#define _ListNull_h_
//$ class ListNull
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ListNull : public ::java::lang::Object {
	$class(ListNull, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ListNull();
	void init$();
	static void go($String* what, $ObjectArray* fs);
	static void main($StringArray* args);
};

#endif // _ListNull_h_