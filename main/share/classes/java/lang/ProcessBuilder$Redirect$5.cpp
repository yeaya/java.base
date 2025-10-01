#include <java/lang/ProcessBuilder$Redirect$5.h>

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

#undef WRITE

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

$FieldInfo _ProcessBuilder$Redirect$5_FieldInfo_[] = {
	{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessBuilder$Redirect$5, val$file)},
	{}
};

$MethodInfo _ProcessBuilder$Redirect$5_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(ProcessBuilder$Redirect$5::*)($File*)>(&ProcessBuilder$Redirect$5::init$))},
	{"append", "()Z", nullptr, 0},
	{"file", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProcessBuilder$Redirect$5_EnclosingMethodInfo_ = {
	"java.lang.ProcessBuilder$Redirect",
	"to",
	"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;"
};

$InnerClassInfo _ProcessBuilder$Redirect$5_InnerClassesInfo_[] = {
	{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.lang.ProcessBuilder$Redirect$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessBuilder$Redirect$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessBuilder$Redirect$5",
	"java.lang.ProcessBuilder$Redirect",
	nullptr,
	_ProcessBuilder$Redirect$5_FieldInfo_,
	_ProcessBuilder$Redirect$5_MethodInfo_,
	nullptr,
	&_ProcessBuilder$Redirect$5_EnclosingMethodInfo_,
	_ProcessBuilder$Redirect$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessBuilder"
};

$Object* allocate$ProcessBuilder$Redirect$5($Class* clazz) {
	return $of($alloc(ProcessBuilder$Redirect$5));
}

void ProcessBuilder$Redirect$5::init$($File* val$file) {
	$set(this, val$file, val$file);
	$ProcessBuilder$Redirect::init$();
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$5::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::WRITE;
}

$File* ProcessBuilder$Redirect$5::file() {
	return this->val$file;
}

$String* ProcessBuilder$Redirect$5::toString() {
	return $str({"redirect to write to file \""_s, this->val$file, "\""_s});
}

bool ProcessBuilder$Redirect$5::append() {
	return false;
}

ProcessBuilder$Redirect$5::ProcessBuilder$Redirect$5() {
}

$Class* ProcessBuilder$Redirect$5::load$($String* name, bool initialize) {
	$loadClass(ProcessBuilder$Redirect$5, name, initialize, &_ProcessBuilder$Redirect$5_ClassInfo_, allocate$ProcessBuilder$Redirect$5);
	return class$;
}

$Class* ProcessBuilder$Redirect$5::class$ = nullptr;

	} // lang
} // java