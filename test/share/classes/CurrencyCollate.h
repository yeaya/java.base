#ifndef _CurrencyCollate_h_
#define _CurrencyCollate_h_
//$ class CurrencyCollate
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class Collator;
	}
}

class $export CurrencyCollate : public ::java::lang::Object {
	$class(CurrencyCollate, 0, ::java::lang::Object)
public:
	CurrencyCollate();
	void init$();
	static void main($StringArray* args);
	static ::java::text::Collator* myCollation;
};

#endif // _CurrencyCollate_h_