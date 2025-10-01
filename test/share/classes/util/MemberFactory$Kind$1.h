#ifndef _util_MemberFactory$Kind$1_h_
#define _util_MemberFactory$Kind$1_h_
//$ class util.MemberFactory$Kind$1
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

class MemberFactory$Kind$1 : public ::util::MemberFactory$Kind {
	$class(MemberFactory$Kind$1, 0, ::util::MemberFactory$Kind)
public:
	MemberFactory$Kind$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::lang::reflect::AccessibleObject* apply($Class* declaringClass, ::util::MemberFactory* factory);
	virtual $Object* apply(Object$* declaringClass, Object$* factory) override;
	static bool $assertionsDisabled;
};

} // util

#endif // _util_MemberFactory$Kind$1_h_