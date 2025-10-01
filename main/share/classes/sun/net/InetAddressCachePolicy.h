#ifndef _sun_net_InetAddressCachePolicy_h_
#define _sun_net_InetAddressCachePolicy_h_
//$ class sun.net.InetAddressCachePolicy
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FOREVER")
#undef FOREVER
#pragma push_macro("DEFAULT_POSITIVE")
#undef DEFAULT_POSITIVE
#pragma push_macro("NEVER")
#undef NEVER

namespace sun {
	namespace net {

class $export InetAddressCachePolicy : public ::java::lang::Object {
	$class(InetAddressCachePolicy, 0, ::java::lang::Object)
public:
	InetAddressCachePolicy();
	void init$();
	static void checkValue(int32_t newPolicy, int32_t oldPolicy);
	static int32_t get();
	static int32_t getNegative();
	static void setIfNotSet(int32_t newPolicy);
	static void setNegativeIfNotSet(int32_t newPolicy);
	static $String* cachePolicyProp;
	static $String* cachePolicyPropFallback;
	static $String* negativeCachePolicyProp;
	static $String* negativeCachePolicyPropFallback;
	static const int32_t FOREVER = (-1);
	static const int32_t NEVER = 0;
	static const int32_t DEFAULT_POSITIVE = 30;
	static $volatile(int32_t) cachePolicy;
	static $volatile(int32_t) negativeCachePolicy;
	static bool propertySet;
	static bool propertyNegativeSet;
};

	} // net
} // sun

#pragma pop_macro("FOREVER")
#pragma pop_macro("DEFAULT_POSITIVE")
#pragma pop_macro("NEVER")

#endif // _sun_net_InetAddressCachePolicy_h_