#include <sun/nio/ch/IOUtil$LinkedRunnable.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Record.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/runtime/ObjectMethods.h>
#include <java/util/Objects.h>
#include <sun/nio/ch/IOUtil.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Record = ::java::lang::Record;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ObjectMethods = ::java::lang::runtime::ObjectMethods;
using $Objects = ::java::util::Objects;
using $IOUtil = ::sun::nio::ch::IOUtil;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _IOUtil$LinkedRunnable_FieldInfo_[] = {
	{"node", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(IOUtil$LinkedRunnable, node$)},
	{"next", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(IOUtil$LinkedRunnable, next$)},
	{}
};

$MethodInfo _IOUtil$LinkedRunnable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Runnable;Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(IOUtil$LinkedRunnable::*)($Runnable*,$Runnable*)>(&IOUtil$LinkedRunnable::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"next", "()Ljava/lang/Runnable;", nullptr, $PUBLIC, $method(static_cast<$Runnable*(IOUtil$LinkedRunnable::*)()>(&IOUtil$LinkedRunnable::next))},
	{"node", "()Ljava/lang/Runnable;", nullptr, $PUBLIC, $method(static_cast<$Runnable*(IOUtil$LinkedRunnable::*)()>(&IOUtil$LinkedRunnable::node))},
	{"of", "(Ljava/lang/Runnable;Ljava/lang/Runnable;)Lsun/nio/ch/IOUtil$LinkedRunnable;", nullptr, $STATIC, $method(static_cast<IOUtil$LinkedRunnable*(*)($Runnable*,$Runnable*)>(&IOUtil$LinkedRunnable::of))},
	{"run", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IOUtil$LinkedRunnable_InnerClassesInfo_[] = {
	{"sun.nio.ch.IOUtil$LinkedRunnable", "sun.nio.ch.IOUtil", "LinkedRunnable", $STATIC | $FINAL},
	{}
};

$ClassInfo _IOUtil$LinkedRunnable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.ch.IOUtil$LinkedRunnable",
	"java.lang.Record",
	"java.lang.Runnable",
	_IOUtil$LinkedRunnable_FieldInfo_,
	_IOUtil$LinkedRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_IOUtil$LinkedRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.IOUtil"
};

$Object* allocate$IOUtil$LinkedRunnable($Class* clazz) {
	return $of($alloc(IOUtil$LinkedRunnable));
}

$Object* IOUtil$LinkedRunnable::clone() {
	 return this->$Record::clone();
}

void IOUtil$LinkedRunnable::finalize() {
	this->$Record::finalize();
}

void IOUtil$LinkedRunnable::init$($Runnable* node, $Runnable* next) {
	$Record::init$();
	$Objects::requireNonNull(node);
	$set(this, node$, node);
	$set(this, next$, next);
}

void IOUtil$LinkedRunnable::run() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->node$)->run();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (this->next$ != nullptr) {
				$nc(this->next$)->run();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

IOUtil$LinkedRunnable* IOUtil$LinkedRunnable::of($Runnable* first, $Runnable* second) {
	$init(IOUtil$LinkedRunnable);
	return $new(IOUtil$LinkedRunnable, first, second);
}

$Runnable* IOUtil$LinkedRunnable::node() {
	return this->node$;
}

$Runnable* IOUtil$LinkedRunnable::next() {
	return this->next$;
}

$String* IOUtil$LinkedRunnable::toString() {
	return $cast($String, $cast($MethodHandle, $($ObjectMethods::bootstrap($($MethodHandles::lookup()), "toString"_s, $($MethodType::methodType(nullptr)), IOUtil$LinkedRunnable::class$, "node;next"_s, $$new($MethodHandleArray, {nullptr, nullptr}))))->invoke($$new($ObjectArray, {$of(this)})));
}

int32_t IOUtil$LinkedRunnable::hashCode() {
	return $intValue($cast($MethodHandle, $($ObjectMethods::bootstrap($($MethodHandles::lookup()), "hashCode"_s, $($MethodType::methodType(nullptr)), IOUtil$LinkedRunnable::class$, "node;next"_s, $$new($MethodHandleArray, {nullptr, nullptr}))))->invoke($$new($ObjectArray, {$of(this)})));
}

bool IOUtil$LinkedRunnable::equals(Object$* o) {
	return $booleanValue($cast($MethodHandle, $($ObjectMethods::bootstrap($($MethodHandles::lookup()), "equals"_s, $($MethodType::methodType(nullptr)), IOUtil$LinkedRunnable::class$, "node;next"_s, $$new($MethodHandleArray, {nullptr, nullptr}))))->invoke($$new($ObjectArray, {$of(this), o})));
}

IOUtil$LinkedRunnable::IOUtil$LinkedRunnable() {
}

$Class* IOUtil$LinkedRunnable::load$($String* name, bool initialize) {
	$loadClass(IOUtil$LinkedRunnable, name, initialize, &_IOUtil$LinkedRunnable_ClassInfo_, allocate$IOUtil$LinkedRunnable);
	return class$;
}

$Class* IOUtil$LinkedRunnable::class$ = nullptr;

		} // ch
	} // nio
} // sun