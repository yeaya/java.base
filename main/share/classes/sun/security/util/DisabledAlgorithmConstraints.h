#ifndef _sun_security_util_DisabledAlgorithmConstraints_h_
#define _sun_security_util_DisabledAlgorithmConstraints_h_
//$ class sun.security.util.DisabledAlgorithmConstraints
//$ extends sun.security.util.AbstractAlgorithmConstraints

#include <sun/security/util/AbstractAlgorithmConstraints.h>

#pragma push_macro("PROPERTY_CERTPATH_DISABLED_ALGS")
#undef PROPERTY_CERTPATH_DISABLED_ALGS
#pragma push_macro("PROPERTY_DISABLED_EC_CURVES")
#undef PROPERTY_DISABLED_EC_CURVES
#pragma push_macro("PROPERTY_JAR_DISABLED_ALGS")
#undef PROPERTY_JAR_DISABLED_ALGS
#pragma push_macro("PROPERTY_SECURITY_LEGACY_ALGS")
#undef PROPERTY_SECURITY_LEGACY_ALGS
#pragma push_macro("PROPERTY_TLS_DISABLED_ALGS")
#undef PROPERTY_TLS_DISABLED_ALGS

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
			class ConstraintsParameters;
			class Debug;
			class DisabledAlgorithmConstraints$Constraints;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export DisabledAlgorithmConstraints : public ::sun::security::util::AbstractAlgorithmConstraints {
	$class(DisabledAlgorithmConstraints, 0, ::sun::security::util::AbstractAlgorithmConstraints)
public:
	DisabledAlgorithmConstraints();
	void init$($String* propertyName);
	void init$($String* propertyName, ::sun::security::util::AlgorithmDecomposer* decomposer);
	static ::sun::security::util::DisabledAlgorithmConstraints* certPathConstraints();
	bool checkConstraints(::java::util::Set* primitives, $String* algorithm, ::java::security::Key* key, ::java::security::AlgorithmParameters* parameters);
	static ::java::util::List* getNamedCurveFromKey(::java::security::Key* key);
	static ::sun::security::util::DisabledAlgorithmConstraints* jarConstraints();
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::AlgorithmParameters* parameters) override;
	virtual bool permits(::java::util::Set* primitives, ::java::security::Key* key) override;
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::Key* key, ::java::security::AlgorithmParameters* parameters) override;
	void permits($String* algorithm, ::java::security::AlgorithmParameters* ap, ::sun::security::util::ConstraintsParameters* cp);
	void permits(::java::security::AlgorithmParameters* ap, ::sun::security::util::ConstraintsParameters* cp);
	void permits($String* algorithm, ::sun::security::util::ConstraintsParameters* cp);
	void permitsPSSParams(::java::security::AlgorithmParameters* ap, ::sun::security::util::ConstraintsParameters* cp);
	static ::sun::security::util::Debug* debug;
	static $String* PROPERTY_CERTPATH_DISABLED_ALGS;
	static $String* PROPERTY_SECURITY_LEGACY_ALGS;
	static $String* PROPERTY_TLS_DISABLED_ALGS;
	static $String* PROPERTY_JAR_DISABLED_ALGS;
	static $String* PROPERTY_DISABLED_EC_CURVES;
	::java::util::List* disabledAlgorithms = nullptr;
	::sun::security::util::DisabledAlgorithmConstraints$Constraints* algorithmConstraints = nullptr;
};

		} // util
	} // security
} // sun

#pragma pop_macro("PROPERTY_CERTPATH_DISABLED_ALGS")
#pragma pop_macro("PROPERTY_DISABLED_EC_CURVES")
#pragma pop_macro("PROPERTY_JAR_DISABLED_ALGS")
#pragma pop_macro("PROPERTY_SECURITY_LEGACY_ALGS")
#pragma pop_macro("PROPERTY_TLS_DISABLED_ALGS")

#endif // _sun_security_util_DisabledAlgorithmConstraints_h_