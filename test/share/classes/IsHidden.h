#ifndef _IsHidden_h_
#define _IsHidden_h_
//$ class IsHidden
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export IsHidden : public ::java::lang::Object {
	$class(IsHidden, 0, ::java::lang::Object)
public:
	IsHidden();
	void init$();
	static void checkHidden(::java::io::File* f);
	static void ck($String* path, bool ans);
	static void main($StringArray* args);
	static void setHidden(::java::io::File* f, bool value);
	static void testUnix();
	static void testWin32();
	static $String* dir;
};

#endif // _IsHidden_h_