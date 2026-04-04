#include <sun/security/x509/GeneralNameInterface.h>
#include <sun/security/util/DerOutputStream.h>
#include <jcpp.h>

#undef NAME_ANY
#undef NAME_DIFF_TYPE
#undef NAME_DIRECTORY
#undef NAME_DNS
#undef NAME_EDI
#undef NAME_IP
#undef NAME_MATCH
#undef NAME_NARROWS
#undef NAME_OID
#undef NAME_RFC822
#undef NAME_SAME_TYPE
#undef NAME_URI
#undef NAME_WIDENS
#undef NAME_X400

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerOutputStream = ::sun::security::util::DerOutputStream;

namespace sun {
	namespace security {
		namespace x509 {

$Class* GeneralNameInterface::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NAME_ANY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_ANY)},
		{"NAME_RFC822", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_RFC822)},
		{"NAME_DNS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_DNS)},
		{"NAME_X400", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_X400)},
		{"NAME_DIRECTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_DIRECTORY)},
		{"NAME_EDI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_EDI)},
		{"NAME_URI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_URI)},
		{"NAME_IP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_IP)},
		{"NAME_OID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_OID)},
		{"NAME_DIFF_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_DIFF_TYPE)},
		{"NAME_MATCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_MATCH)},
		{"NAME_NARROWS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_NARROWS)},
		{"NAME_WIDENS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_WIDENS)},
		{"NAME_SAME_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeneralNameInterface, NAME_SAME_TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GeneralNameInterface, constrains, int32_t, GeneralNameInterface*), "java.lang.UnsupportedOperationException"},
		{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GeneralNameInterface, encode, void, $DerOutputStream*), "java.io.IOException"},
		{"getType", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GeneralNameInterface, getType, int32_t)},
		{"subtreeDepth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GeneralNameInterface, subtreeDepth, int32_t), "java.lang.UnsupportedOperationException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.x509.GeneralNameInterface",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GeneralNameInterface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GeneralNameInterface);
	});
	return class$;
}

$Class* GeneralNameInterface::class$ = nullptr;

		} // x509
	} // security
} // sun