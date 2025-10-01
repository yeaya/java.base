#include <indify/Indify$1.h>

#include <indify/Indify.h>
#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

$FieldInfo _Indify$1_FieldInfo_[] = {
	{"this$0", "Lindify/Indify;", nullptr, $FINAL | $SYNTHETIC, $field(Indify$1, this$0)},
	{}
};

$MethodInfo _Indify$1_MethodInfo_[] = {
	{"<init>", "(Lindify/Indify;)V", nullptr, 0, $method(static_cast<void(Indify$1::*)($Indify*)>(&Indify$1::init$))},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Indify$1_EnclosingMethodInfo_ = {
	"indify.Indify",
	"indifyTree",
	"(Ljava/io/File;Ljava/io/File;)V"
};

$InnerClassInfo _Indify$1_InnerClassesInfo_[] = {
	{"indify.Indify$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Indify$1_ClassInfo_ = {
	$ACC_SUPER,
	"indify.Indify$1",
	"java.lang.Object",
	"java.io.FilenameFilter",
	_Indify$1_FieldInfo_,
	_Indify$1_MethodInfo_,
	nullptr,
	&_Indify$1_EnclosingMethodInfo_,
	_Indify$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$1($Class* clazz) {
	return $of($alloc(Indify$1));
}

void Indify$1::init$($Indify* this$0) {
	$set(this, this$0, this$0);
}

bool Indify$1::accept($File* dir, $String* name) {
	if ($nc(name)->endsWith(".class"_s)) {
		return true;
	}
	if ($nc(name)->contains("."_s)) {
		return false;
	}
	return $Character::isJavaIdentifierStart($nc(name)->charAt(0));
}

Indify$1::Indify$1() {
}

$Class* Indify$1::load$($String* name, bool initialize) {
	$loadClass(Indify$1, name, initialize, &_Indify$1_ClassInfo_, allocate$Indify$1);
	return class$;
}

$Class* Indify$1::class$ = nullptr;

} // indify