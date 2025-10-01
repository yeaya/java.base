#ifndef _TimeZoneLastModified_h_
#define _TimeZoneLastModified_h_
//$ class TimeZoneLastModified
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TIME")
#undef TIME

class $export TimeZoneLastModified : public ::java::lang::Object {
	$class(TimeZoneLastModified, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TimeZoneLastModified();
	void init$();
	static void main($StringArray* args);
	static int32_t test($String* timeZoneID);
	static const int64_t TIME = (int64_t)0x000000EE3B69DCD2;
};

#pragma pop_macro("TIME")

#endif // _TimeZoneLastModified_h_