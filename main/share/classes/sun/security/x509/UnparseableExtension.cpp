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
using $Extension = ::sun::security::x509::Extension;
using $OIDMap = ::sun::security::x509::OIDMap;

namespace sun {
	namespace security {
		namespace x509 {

void UnparseableExtension::init$($Extension* ext, $Throwable* why) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Extension::init$(ext);
	$set(this, name, ""_s);
	try {
		$Class* extClass = $OIDMap::getClass($($nc(ext)->getExtensionId()));
		if (extClass != nullptr) {
			$var($Field, field, extClass->getDeclaredField("NAME"_s));
			$set(this, name, $str({$$cast($String, $nc(field)->get(nullptr)), " "_s}));
		}
	} catch ($Exception& e) {
	}
	$set(this, exceptionDescription, $nc(why)->toString());
}

$String* UnparseableExtension::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Extension::toString()));
	var$0->append("Unparseable "_s);
	var$0->append(this->name);
	var$0->append("extension due to\n"_s);
	var$0->append(this->exceptionDescription);
	var$0->append("\n\n"_s);
	var$0->append($($$new($HexDumpEncoder)->encodeBuffer($(getExtensionValue()))));
	return $str(var$0);
}

UnparseableExtension::UnparseableExtension() {
}

$Class* UnparseableExtension::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnparseableExtension, name)},
		{"exceptionDescription", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnparseableExtension, exceptionDescription)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/x509/Extension;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(UnparseableExtension, init$, void, $Extension*, $Throwable*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnparseableExtension, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.x509.UnparseableExtension",
		"sun.security.x509.Extension",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnparseableExtension, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnparseableExtension);
	});
	return class$;
}

$Class* UnparseableExtension::class$ = nullptr;

		} // x509
	} // security
} // sun