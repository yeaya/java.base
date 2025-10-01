#ifndef _DateFormatSymbolsCloneTest_h_
#define _DateFormatSymbolsCloneTest_h_
//$ class DateFormatSymbolsCloneTest
//$ extends java.text.DateFormatSymbols

#include <java/lang/Array.h>
#include <java/text/DateFormatSymbols.h>

class $export DateFormatSymbolsCloneTest : public ::java::text::DateFormatSymbols {
	$class(DateFormatSymbolsCloneTest, $NO_CLASS_INIT, ::java::text::DateFormatSymbols)
public:
	DateFormatSymbolsCloneTest();
	void init$();
	virtual $Object* clone() override;
	static void main($StringArray* args);
	int32_t value = 0;
};

#endif // _DateFormatSymbolsCloneTest_h_