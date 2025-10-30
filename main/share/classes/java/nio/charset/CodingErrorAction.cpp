#include <java/nio/charset/CodingErrorAction.h>

#include <jcpp.h>

#undef IGNORE
#undef REPLACE
#undef REPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _CodingErrorAction_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CodingErrorAction, name)},
	{"IGNORE", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CodingErrorAction, IGNORE)},
	{"REPLACE", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CodingErrorAction, REPLACE)},
	{"REPORT", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CodingErrorAction, REPORT)},
	{}
};

$MethodInfo _CodingErrorAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CodingErrorAction::*)($String*)>(&CodingErrorAction::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CodingErrorAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.charset.CodingErrorAction",
	"java.lang.Object",
	nullptr,
	_CodingErrorAction_FieldInfo_,
	_CodingErrorAction_MethodInfo_
};

$Object* allocate$CodingErrorAction($Class* clazz) {
	return $of($alloc(CodingErrorAction));
}

CodingErrorAction* CodingErrorAction::IGNORE = nullptr;
CodingErrorAction* CodingErrorAction::REPLACE = nullptr;
CodingErrorAction* CodingErrorAction::REPORT = nullptr;

void CodingErrorAction::init$($String* name) {
	$set(this, name, name);
}

$String* CodingErrorAction::toString() {
	return this->name;
}

void clinit$CodingErrorAction($Class* class$) {
	$assignStatic(CodingErrorAction::IGNORE, $new(CodingErrorAction, "IGNORE"_s));
	$assignStatic(CodingErrorAction::REPLACE, $new(CodingErrorAction, "REPLACE"_s));
	$assignStatic(CodingErrorAction::REPORT, $new(CodingErrorAction, "REPORT"_s));
}

CodingErrorAction::CodingErrorAction() {
}

$Class* CodingErrorAction::load$($String* name, bool initialize) {
	$loadClass(CodingErrorAction, name, initialize, &_CodingErrorAction_ClassInfo_, clinit$CodingErrorAction, allocate$CodingErrorAction);
	return class$;
}

$Class* CodingErrorAction::class$ = nullptr;

		} // charset
	} // nio
} // java