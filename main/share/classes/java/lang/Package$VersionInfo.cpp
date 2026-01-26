#include <java/lang/Package$VersionInfo.h>

#include <java/lang/Package.h>
#include <java/net/URL.h>
#include <jcpp.h>

#undef NULL_VERSION_INFO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

namespace java {
	namespace lang {

$FieldInfo _Package$VersionInfo_FieldInfo_[] = {
	{"NULL_VERSION_INFO", "Ljava/lang/Package$VersionInfo;", nullptr, $STATIC | $FINAL, $staticField(Package$VersionInfo, NULL_VERSION_INFO)},
	{"specTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Package$VersionInfo, specTitle)},
	{"specVersion", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Package$VersionInfo, specVersion)},
	{"specVendor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Package$VersionInfo, specVendor)},
	{"implTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Package$VersionInfo, implTitle)},
	{"implVersion", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Package$VersionInfo, implVersion)},
	{"implVendor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Package$VersionInfo, implVendor)},
	{"sealBase", "Ljava/net/URL;", nullptr, $PRIVATE | $FINAL, $field(Package$VersionInfo, sealBase)},
	{}
};

$MethodInfo _Package$VersionInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)V", nullptr, $PRIVATE, $method(Package$VersionInfo, init$, void, $String*, $String*, $String*, $String*, $String*, $String*, $URL*)},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)Ljava/lang/Package$VersionInfo;", nullptr, $STATIC, $staticMethod(Package$VersionInfo, getInstance, Package$VersionInfo*, $String*, $String*, $String*, $String*, $String*, $String*, $URL*)},
	{}
};

$InnerClassInfo _Package$VersionInfo_InnerClassesInfo_[] = {
	{"java.lang.Package$VersionInfo", "java.lang.Package", "VersionInfo", $STATIC},
	{}
};

$ClassInfo _Package$VersionInfo_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Package$VersionInfo",
	"java.lang.Object",
	nullptr,
	_Package$VersionInfo_FieldInfo_,
	_Package$VersionInfo_MethodInfo_,
	nullptr,
	nullptr,
	_Package$VersionInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Package"
};

$Object* allocate$Package$VersionInfo($Class* clazz) {
	return $of($alloc(Package$VersionInfo));
}

Package$VersionInfo* Package$VersionInfo::NULL_VERSION_INFO = nullptr;

Package$VersionInfo* Package$VersionInfo::getInstance($String* spectitle, $String* specversion, $String* specvendor, $String* impltitle, $String* implversion, $String* implvendor, $URL* sealbase) {
	$init(Package$VersionInfo);
	if (spectitle == nullptr && specversion == nullptr && specvendor == nullptr && impltitle == nullptr && implversion == nullptr && implvendor == nullptr && sealbase == nullptr) {
		return Package$VersionInfo::NULL_VERSION_INFO;
	}
	return $new(Package$VersionInfo, spectitle, specversion, specvendor, impltitle, implversion, implvendor, sealbase);
}

void Package$VersionInfo::init$($String* spectitle, $String* specversion, $String* specvendor, $String* impltitle, $String* implversion, $String* implvendor, $URL* sealbase) {
	$set(this, implTitle, impltitle);
	$set(this, implVersion, implversion);
	$set(this, implVendor, implvendor);
	$set(this, specTitle, spectitle);
	$set(this, specVersion, specversion);
	$set(this, specVendor, specvendor);
	$set(this, sealBase, sealbase);
}

void clinit$Package$VersionInfo($Class* class$) {
	$assignStatic(Package$VersionInfo::NULL_VERSION_INFO, $new(Package$VersionInfo, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr));
}

Package$VersionInfo::Package$VersionInfo() {
}

$Class* Package$VersionInfo::load$($String* name, bool initialize) {
	$loadClass(Package$VersionInfo, name, initialize, &_Package$VersionInfo_ClassInfo_, clinit$Package$VersionInfo, allocate$Package$VersionInfo);
	return class$;
}

$Class* Package$VersionInfo::class$ = nullptr;

	} // lang
} // java