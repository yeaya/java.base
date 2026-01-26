#include <sun/security/util/ManifestDigester$Position.h>

#include <sun/security/util/ManifestDigester.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _ManifestDigester$Position_FieldInfo_[] = {
	{"endOfFirstLine", "I", nullptr, 0, $field(ManifestDigester$Position, endOfFirstLine)},
	{"endOfSection", "I", nullptr, 0, $field(ManifestDigester$Position, endOfSection)},
	{"startOfNext", "I", nullptr, 0, $field(ManifestDigester$Position, startOfNext)},
	{}
};

$MethodInfo _ManifestDigester$Position_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ManifestDigester$Position, init$, void)},
	{}
};

$InnerClassInfo _ManifestDigester$Position_InnerClassesInfo_[] = {
	{"sun.security.util.ManifestDigester$Position", "sun.security.util.ManifestDigester", "Position", $STATIC},
	{}
};

$ClassInfo _ManifestDigester$Position_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.ManifestDigester$Position",
	"java.lang.Object",
	nullptr,
	_ManifestDigester$Position_FieldInfo_,
	_ManifestDigester$Position_MethodInfo_,
	nullptr,
	nullptr,
	_ManifestDigester$Position_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.ManifestDigester"
};

$Object* allocate$ManifestDigester$Position($Class* clazz) {
	return $of($alloc(ManifestDigester$Position));
}

void ManifestDigester$Position::init$() {
}

ManifestDigester$Position::ManifestDigester$Position() {
}

$Class* ManifestDigester$Position::load$($String* name, bool initialize) {
	$loadClass(ManifestDigester$Position, name, initialize, &_ManifestDigester$Position_ClassInfo_, allocate$ManifestDigester$Position);
	return class$;
}

$Class* ManifestDigester$Position::class$ = nullptr;

		} // util
	} // security
} // sun