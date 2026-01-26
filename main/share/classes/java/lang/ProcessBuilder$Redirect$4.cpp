#include <java/lang/ProcessBuilder$Redirect$4.h>

#include <java/io/File.h>
#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <jcpp.h>

#undef READ

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

$FieldInfo _ProcessBuilder$Redirect$4_FieldInfo_[] = {
	{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessBuilder$Redirect$4, val$file)},
	{}
};

$MethodInfo _ProcessBuilder$Redirect$4_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(ProcessBuilder$Redirect$4, init$, void, $File*)},
	{"file", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$4, file, $File*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$4, toString, $String*)},
	{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$4, type, $ProcessBuilder$Redirect$Type*)},
	{}
};

$EnclosingMethodInfo _ProcessBuilder$Redirect$4_EnclosingMethodInfo_ = {
	"java.lang.ProcessBuilder$Redirect",
	"from",
	"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;"
};

$InnerClassInfo _ProcessBuilder$Redirect$4_InnerClassesInfo_[] = {
	{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.lang.ProcessBuilder$Redirect$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessBuilder$Redirect$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessBuilder$Redirect$4",
	"java.lang.ProcessBuilder$Redirect",
	nullptr,
	_ProcessBuilder$Redirect$4_FieldInfo_,
	_ProcessBuilder$Redirect$4_MethodInfo_,
	nullptr,
	&_ProcessBuilder$Redirect$4_EnclosingMethodInfo_,
	_ProcessBuilder$Redirect$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessBuilder"
};

$Object* allocate$ProcessBuilder$Redirect$4($Class* clazz) {
	return $of($alloc(ProcessBuilder$Redirect$4));
}

void ProcessBuilder$Redirect$4::init$($File* val$file) {
	$set(this, val$file, val$file);
	$ProcessBuilder$Redirect::init$();
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$4::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::READ;
}

$File* ProcessBuilder$Redirect$4::file() {
	return this->val$file;
}

$String* ProcessBuilder$Redirect$4::toString() {
	return $str({"redirect to read from file \""_s, this->val$file, "\""_s});
}

ProcessBuilder$Redirect$4::ProcessBuilder$Redirect$4() {
}

$Class* ProcessBuilder$Redirect$4::load$($String* name, bool initialize) {
	$loadClass(ProcessBuilder$Redirect$4, name, initialize, &_ProcessBuilder$Redirect$4_ClassInfo_, allocate$ProcessBuilder$Redirect$4);
	return class$;
}

$Class* ProcessBuilder$Redirect$4::class$ = nullptr;

	} // lang
} // java