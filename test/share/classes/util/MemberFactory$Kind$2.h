#ifndef _util_MemberFactory$Kind$2_h_
#define _util_MemberFactory$Kind$2_h_
//$ class util.MemberFactory$Kind$2
//$ extends util.MemberFactory$Kind

#include <util/MemberFactory$Kind.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AccessibleObject;
		}
	}
}
namespace util {
	class MemberFactory;
}

namespace util {

class MemberFactory$Kind$2 : public ::util::MemberFactory$Kind {
	$class(MemberFactory$Kind$2, 0, ::util::MemberFactory$Kind)
public:
	MemberFactory$Kind$2();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::lang::reflect::AccessibleObject* apply($Class* declaringClass, ::util::MemberFactory* factory);
	virtual $Object* apply(Object$* declaringClass, Object$* factory) override;
	static bool $assertionsDisabled;
};

} // util

#endif // _util_MemberFactory$Kind$2_h_