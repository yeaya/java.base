#ifndef _Bug5047314_h_
#define _Bug5047314_h_
//$ class Bug5047314
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class Collator;
	}
}

class $export Bug5047314 : public ::java::lang::Object {
	$class(Bug5047314, 0, ::java::lang::Object)
public:
	Bug5047314();
	void init$();
	static void main($StringArray* args);
	static void testLao1();
	static void testLao2();
	static void testThai1();
	static void testThai2();
	static ::java::text::Collator* colLao;
	static ::java::text::Collator* colThai;
	static $StringArray* textLao;
	static $StringArray* textThai;
};

#endif // _Bug5047314_h_