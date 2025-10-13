#ifndef _sun_net_ProgressSource$State_h_
#define _sun_net_ProgressSource$State_h_
//$ class sun.net.ProgressSource$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CONNECTED")
#undef CONNECTED
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("UPDATE")
#undef UPDATE

namespace sun {
	namespace net {

class $export ProgressSource$State : public ::java::lang::Enum {
	$class(ProgressSource$State, 0, ::java::lang::Enum)
public:
	ProgressSource$State();
	static $Array<::sun::net::ProgressSource$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::ProgressSource$State* valueOf($String* name);
	static $Array<::sun::net::ProgressSource$State>* values();
	static ::sun::net::ProgressSource$State* NEW;
	static ::sun::net::ProgressSource$State* CONNECTED;
	static ::sun::net::ProgressSource$State* UPDATE;
	static ::sun::net::ProgressSource$State* DELETE;
	static $Array<::sun::net::ProgressSource$State>* $VALUES;
};

	} // net
} // sun

#pragma pop_macro("CONNECTED")
#pragma pop_macro("DELETE")
#pragma pop_macro("NEW")
#pragma pop_macro("UPDATE")

#endif // _sun_net_ProgressSource$State_h_