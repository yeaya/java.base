#include <java/lang/CharacterName$1.h>

#include <java/io/InputStream.h>
#include <java/lang/CharacterName.h>
#include <jcpp.h>

using $CharacterName = ::java::lang::CharacterName;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _CharacterName$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/CharacterName;", nullptr, $FINAL | $SYNTHETIC, $field(CharacterName$1, this$0)},
	{}
};

$MethodInfo _CharacterName$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/CharacterName;)V", nullptr, 0, $method(CharacterName$1, init$, void, $CharacterName*)},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(CharacterName$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _CharacterName$1_EnclosingMethodInfo_ = {
	"java.lang.CharacterName",
	"<init>",
	"()V"
};

$InnerClassInfo _CharacterName$1_InnerClassesInfo_[] = {
	{"java.lang.CharacterName$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CharacterName$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.CharacterName$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_CharacterName$1_FieldInfo_,
	_CharacterName$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_CharacterName$1_EnclosingMethodInfo_,
	_CharacterName$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.CharacterName"
};

$Object* allocate$CharacterName$1($Class* clazz) {
	return $of($alloc(CharacterName$1));
}

void CharacterName$1::init$($CharacterName* this$0) {
	$set(this, this$0, this$0);
}

$Object* CharacterName$1::run() {
	$beforeCallerSensitive();
	return $of($of(this)->getClass()->getResourceAsStream("uniName.dat"_s));
}

CharacterName$1::CharacterName$1() {
}

$Class* CharacterName$1::load$($String* name, bool initialize) {
	$loadClass(CharacterName$1, name, initialize, &_CharacterName$1_ClassInfo_, allocate$CharacterName$1);
	return class$;
}

$Class* CharacterName$1::class$ = nullptr;

	} // lang
} // java