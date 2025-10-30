#include <sun/security/x509/UnparseableExtension.h>

#include <java/lang/reflect/Field.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/OIDMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $Extension = ::sun::security::x509::Extension;
using $OIDMap = ::sun::security::x509::OIDMap;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _UnparseableExtension_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnparseableExtension, name)},
	{"exceptionDescription", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnparseableExtension, exceptionDescription)},
	{}
};

$MethodInfo _UnparseableExtension_MethodInfo_[] = {
	{"<init>", "(Lsun/security/x509/Extension;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(UnparseableExtension::*)($Extension*,$Throwable*)>(&UnparseableExtension::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnparseableExtension_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.x509.UnparseableExtension",
	"sun.security.x509.Extension",
	nullptr,
	_UnparseableExtension_FieldInfo_,
	_UnparseableExtension_MethodInfo_
};

$Object* allocate$UnparseableExtension($Class* clazz) {
	return $of($alloc(UnparseableExtension));
}

void UnparseableExtension::init$($Extension* ext, $Throwable* why) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Extension::init$(ext);
	$set(this, name, ""_s);
	try {
		$Class* extClass = $OIDMap::getClass($($nc(ext)->getExtensionId()));
		if (extClass != nullptr) {
			$var($Field, field, extClass->getDeclaredField("NAME"_s));
			$set(this, name, $str({($cast($String, $($nc(field)->get(nullptr)))), " "_s}));
		}
	} catch ($Exception& e) {
	}
	$set(this, exceptionDescription, $nc(why)->toString());
}

$String* UnparseableExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($Extension::toString()), "Unparseable "_s, this->name, "extension due to\n"_s, this->exceptionDescription, "\n\n"_s}));
	return $concat(var$0, $($$new($HexDumpEncoder)->encodeBuffer($(getExtensionValue()))));
}

UnparseableExtension::UnparseableExtension() {
}

$Class* UnparseableExtension::load$($String* name, bool initialize) {
	$loadClass(UnparseableExtension, name, initialize, &_UnparseableExtension_ClassInfo_, allocate$UnparseableExtension);
	return class$;
}

$Class* UnparseableExtension::class$ = nullptr;

		} // x509
	} // security
} // sun