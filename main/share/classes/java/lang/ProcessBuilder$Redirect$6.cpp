#include <java/lang/ProcessBuilder$Redirect$6.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef APPEND

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder$Redirect = ::java::lang::ProcessBuilder$Redirect;
using $ProcessBuilder$Redirect$Type = ::java::lang::ProcessBuilder$Redirect$Type;

namespace java {
	namespace lang {

$FieldInfo _ProcessBuilder$Redirect$6_FieldInfo_[] = {
	{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessBuilder$Redirect$6, val$file)},
	{}
};

$MethodInfo _ProcessBuilder$Redirect$6_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(ProcessBuilder$Redirect$6::*)($File*)>(&ProcessBuilder$Redirect$6::init$))},
	{"append", "()Z", nullptr, 0},
	{"file", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProcessBuilder$Redirect$6_EnclosingMethodInfo_ = {
	"java.lang.ProcessBuilder$Redirect",
	"appendTo",
	"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;"
};

$InnerClassInfo _ProcessBuilder$Redirect$6_InnerClassesInfo_[] = {
	{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.lang.ProcessBuilder$Redirect$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessBuilder$Redirect$6_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessBuilder$Redirect$6",
	"java.lang.ProcessBuilder$Redirect",
	nullptr,
	_ProcessBuilder$Redirect$6_FieldInfo_,
	_ProcessBuilder$Redirect$6_MethodInfo_,
	nullptr,
	&_ProcessBuilder$Redirect$6_EnclosingMethodInfo_,
	_ProcessBuilder$Redirect$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessBuilder"
};

$Object* allocate$ProcessBuilder$Redirect$6($Class* clazz) {
	return $of($alloc(ProcessBuilder$Redirect$6));
}

void ProcessBuilder$Redirect$6::init$($File* val$file) {
	$set(this, val$file, val$file);
	$ProcessBuilder$Redirect::init$();
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$6::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::APPEND;
}

$File* ProcessBuilder$Redirect$6::file() {
	return this->val$file;
}

$String* ProcessBuilder$Redirect$6::toString() {
	return $str({"redirect to append to file \""_s, this->val$file, "\""_s});
}

bool ProcessBuilder$Redirect$6::append() {
	return true;
}

ProcessBuilder$Redirect$6::ProcessBuilder$Redirect$6() {
}

$Class* ProcessBuilder$Redirect$6::load$($String* name, bool initialize) {
	$loadClass(ProcessBuilder$Redirect$6, name, initialize, &_ProcessBuilder$Redirect$6_ClassInfo_, allocate$ProcessBuilder$Redirect$6);
	return class$;
}

$Class* ProcessBuilder$Redirect$6::class$ = nullptr;

	} // lang
} // java