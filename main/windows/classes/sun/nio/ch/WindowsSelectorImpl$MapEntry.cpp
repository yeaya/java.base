#include <sun/nio/ch/WindowsSelectorImpl$MapEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/WindowsSelectorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $WindowsSelectorImpl = ::sun::nio::ch::WindowsSelectorImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _WindowsSelectorImpl$MapEntry_FieldInfo_[] = {
	{"ski", "Lsun/nio/ch/SelectionKeyImpl;", nullptr, $FINAL, $field(WindowsSelectorImpl$MapEntry, ski)},
	{"updateCount", "J", nullptr, 0, $field(WindowsSelectorImpl$MapEntry, updateCount)},
	{}
};

$MethodInfo _WindowsSelectorImpl$MapEntry_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/SelectionKeyImpl;)V", nullptr, 0, $method(static_cast<void(WindowsSelectorImpl$MapEntry::*)($SelectionKeyImpl*)>(&WindowsSelectorImpl$MapEntry::init$))},
	{}
};

$InnerClassInfo _WindowsSelectorImpl$MapEntry_InnerClassesInfo_[] = {
	{"sun.nio.ch.WindowsSelectorImpl$MapEntry", "sun.nio.ch.WindowsSelectorImpl", "MapEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _WindowsSelectorImpl$MapEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.ch.WindowsSelectorImpl$MapEntry",
	"java.lang.Object",
	nullptr,
	_WindowsSelectorImpl$MapEntry_FieldInfo_,
	_WindowsSelectorImpl$MapEntry_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsSelectorImpl$MapEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.WindowsSelectorImpl"
};

$Object* allocate$WindowsSelectorImpl$MapEntry($Class* clazz) {
	return $of($alloc(WindowsSelectorImpl$MapEntry));
}

void WindowsSelectorImpl$MapEntry::init$($SelectionKeyImpl* ski) {
	this->updateCount = 0;
	$set(this, ski, ski);
}

WindowsSelectorImpl$MapEntry::WindowsSelectorImpl$MapEntry() {
}

$Class* WindowsSelectorImpl$MapEntry::load$($String* name, bool initialize) {
	$loadClass(WindowsSelectorImpl$MapEntry, name, initialize, &_WindowsSelectorImpl$MapEntry_ClassInfo_, allocate$WindowsSelectorImpl$MapEntry);
	return class$;
}

$Class* WindowsSelectorImpl$MapEntry::class$ = nullptr;

		} // ch
	} // nio
} // sun