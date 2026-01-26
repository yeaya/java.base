#include <java/util/Calendar$1.h>

#include <java/io/ObjectInputStream.h>
#include <java/util/Calendar.h>
#include <sun/util/calendar/ZoneInfo.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;
using $ZoneInfo = ::sun::util::calendar::ZoneInfo;

namespace java {
	namespace util {

$FieldInfo _Calendar$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/Calendar;", nullptr, $FINAL | $SYNTHETIC, $field(Calendar$1, this$0)},
	{"val$input", "Ljava/io/ObjectInputStream;", nullptr, $FINAL | $SYNTHETIC, $field(Calendar$1, val$input)},
	{}
};

$MethodInfo _Calendar$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Calendar;Ljava/io/ObjectInputStream;)V", nullptr, 0, $method(Calendar$1, init$, void, $Calendar*, $ObjectInputStream*)},
	{"run", "()Lsun/util/calendar/ZoneInfo;", nullptr, $PUBLIC, $virtualMethod(Calendar$1, run, $Object*), "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Calendar$1_EnclosingMethodInfo_ = {
	"java.util.Calendar",
	"readObject",
	"(Ljava/io/ObjectInputStream;)V"
};

$InnerClassInfo _Calendar$1_InnerClassesInfo_[] = {
	{"java.util.Calendar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Calendar$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Calendar$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Calendar$1_FieldInfo_,
	_Calendar$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Lsun/util/calendar/ZoneInfo;>;",
	&_Calendar$1_EnclosingMethodInfo_,
	_Calendar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Calendar"
};

$Object* allocate$Calendar$1($Class* clazz) {
	return $of($alloc(Calendar$1));
}

void Calendar$1::init$($Calendar* this$0, $ObjectInputStream* val$input) {
	$set(this, this$0, this$0);
	$set(this, val$input, val$input);
}

$Object* Calendar$1::run() {
	return $of($cast($ZoneInfo, $nc(this->val$input)->readObject()));
}

Calendar$1::Calendar$1() {
}

$Class* Calendar$1::load$($String* name, bool initialize) {
	$loadClass(Calendar$1, name, initialize, &_Calendar$1_ClassInfo_, allocate$Calendar$1);
	return class$;
}

$Class* Calendar$1::class$ = nullptr;

	} // util
} // java