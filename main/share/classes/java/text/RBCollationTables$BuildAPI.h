#ifndef _java_text_RBCollationTables$BuildAPI_h_
#define _java_text_RBCollationTables$BuildAPI_h_
//$ class java.text.RBCollationTables$BuildAPI
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace text {
		class RBCollationTables;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace sun {
	namespace text {
		class IntHashtable;
		class UCompactIntArray;
	}
}

namespace java {
	namespace text {

class RBCollationTables$BuildAPI : public ::java::lang::Object {
	$class(RBCollationTables$BuildAPI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RBCollationTables$BuildAPI();
	void init$(::java::text::RBCollationTables* this$0);
	void fillInTables(bool f2ary, bool swap, ::sun::text::UCompactIntArray* map, ::java::util::Vector* cTbl, ::java::util::Vector* eTbl, ::sun::text::IntHashtable* cFlgs, int16_t mso, int16_t mto);
	::java::text::RBCollationTables* this$0 = nullptr;
};

	} // text
} // java

#endif // _java_text_RBCollationTables$BuildAPI_h_