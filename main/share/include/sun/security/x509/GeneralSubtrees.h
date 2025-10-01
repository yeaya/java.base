#ifndef _sun_security_x509_GeneralSubtrees_h_
#define _sun_security_x509_GeneralSubtrees_h_
//$ class sun.security.x509.GeneralSubtrees
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <sun/security/x509/GeneralNameInterface.h>

#pragma push_macro("NAME_MATCH")
#undef NAME_MATCH
#pragma push_macro("NAME_NARROWS")
#undef NAME_NARROWS
#pragma push_macro("NAME_SAME_TYPE")
#undef NAME_SAME_TYPE
#pragma push_macro("NAME_DIFF_TYPE")
#undef NAME_DIFF_TYPE
#pragma push_macro("NAME_WIDENS")
#undef NAME_WIDENS

namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class GeneralSubtree;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import GeneralSubtrees : public ::java::lang::Cloneable {
	$class(GeneralSubtrees, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	GeneralSubtrees();
	void init$();
	void init$(::sun::security::x509::GeneralSubtrees* source);
	void init$(::sun::security::util::DerValue* val);
	virtual void add(::sun::security::x509::GeneralSubtree* tree);
	virtual $Object* clone() override;
	virtual bool contains(::sun::security::x509::GeneralSubtree* tree);
	::sun::security::x509::GeneralSubtree* createWidestSubtree(::sun::security::x509::GeneralNameInterface* name);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* obj) override;
	virtual ::sun::security::x509::GeneralSubtree* get(int32_t index);
	::sun::security::x509::GeneralNameInterface* getGeneralNameInterface(int32_t ndx);
	static ::sun::security::x509::GeneralNameInterface* getGeneralNameInterface(::sun::security::x509::GeneralSubtree* gs);
	virtual int32_t hashCode() override;
	virtual ::sun::security::x509::GeneralSubtrees* intersect(::sun::security::x509::GeneralSubtrees* other);
	virtual ::java::util::Iterator* iterator();
	void minimize();
	virtual void reduce(::sun::security::x509::GeneralSubtrees* excluded);
	virtual void remove(int32_t index);
	virtual int32_t size();
	virtual $String* toString() override;
	virtual ::java::util::List* trees();
	virtual void union$(::sun::security::x509::GeneralSubtrees* other);
	::java::util::List* trees$ = nullptr;
	static const int32_t NAME_DIFF_TYPE = ::sun::security::x509::GeneralNameInterface::NAME_DIFF_TYPE;
	static const int32_t NAME_MATCH = ::sun::security::x509::GeneralNameInterface::NAME_MATCH;
	static const int32_t NAME_NARROWS = ::sun::security::x509::GeneralNameInterface::NAME_NARROWS;
	static const int32_t NAME_WIDENS = ::sun::security::x509::GeneralNameInterface::NAME_WIDENS;
	static const int32_t NAME_SAME_TYPE = ::sun::security::x509::GeneralNameInterface::NAME_SAME_TYPE;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("NAME_MATCH")
#pragma pop_macro("NAME_NARROWS")
#pragma pop_macro("NAME_SAME_TYPE")
#pragma pop_macro("NAME_DIFF_TYPE")
#pragma pop_macro("NAME_WIDENS")

#endif // _sun_security_x509_GeneralSubtrees_h_