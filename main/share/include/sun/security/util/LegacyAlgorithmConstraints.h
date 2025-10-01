#ifndef _sun_security_util_LegacyAlgorithmConstraints_h_
#define _sun_security_util_LegacyAlgorithmConstraints_h_
//$ class sun.security.util.LegacyAlgorithmConstraints
//$ extends sun.security.util.AbstractAlgorithmConstraints

#include <sun/security/util/AbstractAlgorithmConstraints.h>

#pragma push_macro("PROPERTY_TLS_LEGACY_ALGS")
#undef PROPERTY_TLS_LEGACY_ALGS

namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class AlgorithmDecomposer;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import LegacyAlgorithmConstraints : public ::sun::security::util::AbstractAlgorithmConstraints {
	$class(LegacyAlgorithmConstraints, 0, ::sun::security::util::AbstractAlgorithmConstraints)
public:
	LegacyAlgorithmConstraints();
	void init$($String* propertyName, ::sun::security::util::AlgorithmDecomposer* decomposer);
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::AlgorithmParameters* parameters) override;
	virtual bool permits(::java::util::Set* primitives, ::java::security::Key* key) override;
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::Key* key, ::java::security::AlgorithmParameters* parameters) override;
	static $String* PROPERTY_TLS_LEGACY_ALGS;
	::java::util::List* legacyAlgorithms = nullptr;
};

		} // util
	} // security
} // sun

#pragma pop_macro("PROPERTY_TLS_LEGACY_ALGS")

#endif // _sun_security_util_LegacyAlgorithmConstraints_h_