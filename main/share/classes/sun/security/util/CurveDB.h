#ifndef _sun_security_util_CurveDB_h_
#define _sun_security_util_CurveDB_h_
//$ class sun.security.util.CurveDB
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("P")
#undef P
#pragma push_macro("B")
#undef B
#pragma push_macro("BD")
#undef BD
#pragma push_macro("PD")
#undef PD

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class ECParameterSpec;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class KnownOIDs;
			class NamedCurve;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export CurveDB : public ::java::lang::Object {
	$class(CurveDB, 0, ::java::lang::Object)
public:
	CurveDB();
	void init$();
	static void add(::sun::security::util::KnownOIDs* o, int32_t type, $String* sfield, $String* a, $String* b, $String* x, $String* y, $String* n, int32_t h);
	static ::java::math::BigInteger* bi($String* s);
	static ::sun::security::util::NamedCurve* lookup($String* name);
	static ::sun::security::util::NamedCurve* lookup(int32_t length);
	static ::sun::security::util::NamedCurve* lookup(::java::security::spec::ECParameterSpec* params);
	static const int32_t P = 1;
	static const int32_t B = 2;
	static const int32_t PD = 5;
	static const int32_t BD = 6;
	static ::java::util::Map* oidMap;
	static ::java::util::Map* nameMap;
	static ::java::util::Map* lengthMap;
	static ::java::util::Collection* specCollection;
};

		} // util
	} // security
} // sun

#pragma pop_macro("P")
#pragma pop_macro("B")
#pragma pop_macro("BD")
#pragma pop_macro("PD")

#endif // _sun_security_util_CurveDB_h_