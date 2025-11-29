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

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _GeneralNameInterface_FieldInfo_[] = {
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

$MethodInfo _GeneralNameInterface_MethodInfo_[] = {
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.UnsupportedOperationException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getType", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"subtreeDepth", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.UnsupportedOperationException"},
	{}
};

$ClassInfo _GeneralNameInterface_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.x509.GeneralNameInterface",
	nullptr,
	nullptr,
	_GeneralNameInterface_FieldInfo_,
	_GeneralNameInterface_MethodInfo_
};

$Object* allocate$GeneralNameInterface($Class* clazz) {
	return $of($alloc(GeneralNameInterface));
}

$Class* GeneralNameInterface::load$($String* name, bool initialize) {
	$loadClass(GeneralNameInterface, name, initialize, &_GeneralNameInterface_ClassInfo_, allocate$GeneralNameInterface);
	return class$;
}

$Class* GeneralNameInterface::class$ = nullptr;

		} // x509
	} // security
} // sun