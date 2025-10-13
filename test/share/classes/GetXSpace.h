#ifndef _GetXSpace_h_
#define _GetXSpace_h_
//$ class GetXSpace
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DF_PATTERN")
#undef DF_PATTERN
#pragma push_macro("FILE_PREFIX")
#undef FILE_PREFIX
#pragma push_macro("IS_MAC")
#undef IS_MAC
#pragma push_macro("IS_WIN")
#undef IS_WIN
#pragma push_macro("OS_NAME")
#undef OS_NAME

class GetXSpace$Space;
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class SecurityManager;
		class Throwable;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

class $export GetXSpace : public ::java::lang::Object {
	$class(GetXSpace, 0, ::java::lang::Object)
public:
	GetXSpace();
	void init$();
	static void allow(::java::nio::file::Path* path);
	static void compare(::GetXSpace$Space* s);
	static void compareZeroExist();
	static void compareZeroNonExist();
	static void deny(::java::nio::file::Path* path);
	static void fail($String* p);
	static void fail($String* p, int64_t exp, $String* cmp, int64_t got);
	static void fail($String* p, $Class* ex);
	static void main($StringArray* args);
	static void pass();
	static void perms(::java::io::File* file, bool allow);
	static void reset();
	static void setFirst($String* s);
	static ::java::util::ArrayList* space($String* f);
	static int32_t testDF();
	static int32_t testFile(::java::nio::file::Path* dir);
	static void tryCatch(::GetXSpace$Space* s);
	static $Array<::java::lang::SecurityManager>* sma;
	static $String* OS_NAME;
	static bool IS_MAC;
	static bool IS_WIN;
	static ::java::util::regex::Pattern* DF_PATTERN;
	static int32_t fail$;
	static int32_t pass$;
	static $Throwable* first;
	static $String* FILE_PREFIX;
};

#pragma pop_macro("DF_PATTERN")
#pragma pop_macro("FILE_PREFIX")
#pragma pop_macro("IS_MAC")
#pragma pop_macro("IS_WIN")
#pragma pop_macro("OS_NAME")

#endif // _GetXSpace_h_