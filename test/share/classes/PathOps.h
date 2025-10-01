#ifndef _PathOps_h_
#define _PathOps_h_
//$ class PathOps
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export PathOps : public ::java::lang::Object {
	$class(PathOps, 0, ::java::lang::Object)
public:
	PathOps();
	void init$($String* first, $StringArray* more);
	virtual ::PathOps* absolute();
	virtual void check(Object$* result, $String* expected);
	virtual void check(Object$* result, bool expected);
	virtual void checkPath();
	static void doUnixTests();
	static void doWindowsTests();
	virtual ::PathOps* element(int32_t index, $String* expected);
	virtual ::PathOps* ends($String* suffix);
	virtual void fail();
	virtual ::PathOps* hasRoot();
	static void header($String* s);
	virtual ::PathOps* invalid();
	static void main($StringArray* args);
	virtual ::PathOps* makeAbsolute();
	virtual ::PathOps* name($String* expected);
	virtual ::PathOps* normalize($String* expected);
	virtual ::PathOps* notAbsolute();
	virtual ::PathOps* notEnds($String* suffix);
	virtual ::PathOps* notStarts($String* prefix);
	static void npes();
	virtual ::PathOps* parent($String* expected);
	virtual ::java::nio::file::Path* path();
	virtual ::PathOps* relativize($String* other, $String* expected);
	virtual ::PathOps* relativizeFail($String* other);
	virtual ::PathOps* resolve($String* other, $String* expected);
	virtual ::PathOps* resolveSibling($String* other, $String* expected);
	virtual ::PathOps* root($String* expected);
	virtual ::PathOps* starts($String* prefix);
	virtual ::PathOps* string($String* expected);
	virtual ::PathOps* subpath(int32_t startIndex, int32_t endIndex, $String* expected);
	static ::PathOps* test($String* first, $StringArray* more);
	static ::PathOps* test(::java::nio::file::Path* path);
	static ::java::io::PrintStream* out;
	::java::nio::file::Path* path$ = nullptr;
	::java::lang::Exception* exc = nullptr;
};

#endif // _PathOps_h_