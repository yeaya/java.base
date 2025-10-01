#ifndef _General_h_
#define _General_h_
//$ class General
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}

class $export General : public ::java::lang::Object {
	$class(General, 0, ::java::lang::Object)
public:
	General();
	void init$();
	static void check($String* answer, $String* path);
	static void checkNames(int32_t depth, bool create, $String* ans, $String* ask);
	static void checkSlash(int32_t depth, bool create, $String* ans, $String* ask, $String* slash);
	static void checkSlashes(int32_t depth, bool create, $String* ans, $String* ask);
	static void ensureNon($String* fn);
	static $String* findNon($String* dir);
	static $String* findSomeDir($String* dir, bool create);
	static $String* findSomeFile($String* dir, $String* subdir, $StringArray* dl);
	static $String* findSomeFile($String* dir, bool create);
	static $String* gensym();
	static void initTestData(int32_t depth);
	static bool isSlash(char16_t x);
	static $String* pathConcat($String* a, $String* b);
	static $String* trimTrailingSlashes($String* s);
	static bool debug;
	static bool win32;
	static int32_t gensymCounter;
	static $String* userDir;
	static $String* workSubDir;
	static $String* baseDir;
	static $String* relative;
	static ::java::util::Hashtable* checked;
};

#endif // _General_h_