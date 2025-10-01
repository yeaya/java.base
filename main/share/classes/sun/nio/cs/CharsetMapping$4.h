#ifndef _sun_nio_cs_CharsetMapping$4_h_
#define _sun_nio_cs_CharsetMapping$4_h_
//$ class sun.nio.cs.CharsetMapping$4
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace sun {
	namespace nio {
		namespace cs {
			class CharsetMapping$Entry;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class CharsetMapping$4 : public ::java::util::Comparator {
	$class(CharsetMapping$4, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	CharsetMapping$4();
	void init$();
	virtual int32_t compare(::sun::nio::cs::CharsetMapping$Entry* m1, ::sun::nio::cs::CharsetMapping$Entry* m2);
	virtual int32_t compare(Object$* m1, Object$* m2) override;
	virtual bool equals(Object$* obj) override;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_CharsetMapping$4_h_