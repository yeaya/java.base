#include <java/lang/ProcessBuilder$Redirect.h>

#include <java/io/File.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ProcessBuilder$Redirect$1.h>
#include <java/lang/ProcessBuilder$Redirect$2.h>
#include <java/lang/ProcessBuilder$Redirect$3.h>
#include <java/lang/ProcessBuilder$Redirect$4.h>
#include <java/lang/ProcessBuilder$Redirect$5.h>
#include <java/lang/ProcessBuilder$Redirect$6.h>
#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/UnsupportedOperationException.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef DISCARD
#undef INHERIT
#undef NULL_FILE
#undef PIPE

using $File = ::java::io::File;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $ProcessBuilder$Redirect$1 = ::java::lang::ProcessBuilder$Redirect$1;
using $ProcessBuilder$Redirect$2 = ::java::lang::ProcessBuilder$Redirect$2;
using $ProcessBuilder$Redirect$3 = ::java::lang::ProcessBuilder$Redirect$3;
using $ProcessBuilder$Redirect$4 = ::java::lang::ProcessBuilder$Redirect$4;
using $ProcessBuilder$Redirect$5 = ::java::lang::ProcessBuilder$Redirect$5;
using $ProcessBuilder$Redirect$6 = ::java::lang::ProcessBuilder$Redirect$6;
using $ProcessBuilder$Redirect$Type = ::java::lang::ProcessBuilder$Redirect$Type;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace lang {

$FieldInfo _ProcessBuilder$Redirect_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ProcessBuilder$Redirect, $assertionsDisabled)},
	{"NULL_FILE", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProcessBuilder$Redirect, NULL_FILE)},
	{"PIPE", "Ljava/lang/ProcessBuilder$Redirect;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ProcessBuilder$Redirect, PIPE)},
	{"INHERIT", "Ljava/lang/ProcessBuilder$Redirect;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ProcessBuilder$Redirect, INHERIT)},
	{"DISCARD", "Ljava/lang/ProcessBuilder$Redirect;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ProcessBuilder$Redirect, DISCARD)},
	{}
};

$MethodInfo _ProcessBuilder$Redirect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProcessBuilder$Redirect::*)()>(&ProcessBuilder$Redirect::init$))},
	{"append", "()Z", nullptr, 0},
	{"appendTo", "(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessBuilder$Redirect*(*)($File*)>(&ProcessBuilder$Redirect::appendTo))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"file", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"from", "(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessBuilder$Redirect*(*)($File*)>(&ProcessBuilder$Redirect::from))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"to", "(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessBuilder$Redirect*(*)($File*)>(&ProcessBuilder$Redirect::to))},
	{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ProcessBuilder$Redirect_InnerClassesInfo_[] = {
	{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.lang.ProcessBuilder$Redirect$Type", "java.lang.ProcessBuilder$Redirect", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.lang.ProcessBuilder$Redirect$6", nullptr, nullptr, 0},
	{"java.lang.ProcessBuilder$Redirect$5", nullptr, nullptr, 0},
	{"java.lang.ProcessBuilder$Redirect$4", nullptr, nullptr, 0},
	{"java.lang.ProcessBuilder$Redirect$3", nullptr, nullptr, 0},
	{"java.lang.ProcessBuilder$Redirect$2", nullptr, nullptr, 0},
	{"java.lang.ProcessBuilder$Redirect$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessBuilder$Redirect_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.ProcessBuilder$Redirect",
	"java.lang.Object",
	nullptr,
	_ProcessBuilder$Redirect_FieldInfo_,
	_ProcessBuilder$Redirect_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessBuilder$Redirect_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessBuilder"
};

$Object* allocate$ProcessBuilder$Redirect($Class* clazz) {
	return $of($alloc(ProcessBuilder$Redirect));
}

bool ProcessBuilder$Redirect::$assertionsDisabled = false;
$File* ProcessBuilder$Redirect::NULL_FILE = nullptr;
ProcessBuilder$Redirect* ProcessBuilder$Redirect::PIPE = nullptr;
ProcessBuilder$Redirect* ProcessBuilder$Redirect::INHERIT = nullptr;
ProcessBuilder$Redirect* ProcessBuilder$Redirect::DISCARD = nullptr;

$File* ProcessBuilder$Redirect::file() {
	return nullptr;
}

bool ProcessBuilder$Redirect::append() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

ProcessBuilder$Redirect* ProcessBuilder$Redirect::from($File* file) {
	$init(ProcessBuilder$Redirect);
	if (file == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($ProcessBuilder$Redirect$4, file);
}

ProcessBuilder$Redirect* ProcessBuilder$Redirect::to($File* file) {
	$init(ProcessBuilder$Redirect);
	if (file == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($ProcessBuilder$Redirect$5, file);
}

ProcessBuilder$Redirect* ProcessBuilder$Redirect::appendTo($File* file) {
	$init(ProcessBuilder$Redirect);
	if (file == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($ProcessBuilder$Redirect$6, file);
}

bool ProcessBuilder$Redirect::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(obj, this)) {
		return true;
	}
	$var(ProcessBuilder$Redirect, r, nullptr);
	bool var$0 = $instanceOf(ProcessBuilder$Redirect, obj);
	if (var$0) {
		$assign(r, $cast(ProcessBuilder$Redirect, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if ($nc(r)->type() != this->type()) {
		return false;
	}
	if (!ProcessBuilder$Redirect::$assertionsDisabled && !(this->file() != nullptr)) {
		$throwNew($AssertionError);
	}
	return $nc($(this->file()))->equals($($nc(r)->file()));
}

int32_t ProcessBuilder$Redirect::hashCode() {
	$var($File, file, this->file());
	if (file == nullptr) {
		return $Object::hashCode();
	} else {
		return $nc(file)->hashCode();
	}
}

void ProcessBuilder$Redirect::init$() {
}

void clinit$ProcessBuilder$Redirect($Class* class$) {
	$load($ProcessBuilder);
	ProcessBuilder$Redirect::$assertionsDisabled = !$ProcessBuilder::class$->desiredAssertionStatus();
	$assignStatic(ProcessBuilder$Redirect::NULL_FILE, $new($File, ($nc($($GetPropertyAction::privilegedGetProperty("os.name"_s)))->startsWith("Windows"_s) ? "NUL"_s : "/dev/null"_s)));
	$assignStatic(ProcessBuilder$Redirect::PIPE, $new($ProcessBuilder$Redirect$1));
	$assignStatic(ProcessBuilder$Redirect::INHERIT, $new($ProcessBuilder$Redirect$2));
	$assignStatic(ProcessBuilder$Redirect::DISCARD, $new($ProcessBuilder$Redirect$3));
}

ProcessBuilder$Redirect::ProcessBuilder$Redirect() {
}

$Class* ProcessBuilder$Redirect::load$($String* name, bool initialize) {
	$loadClass(ProcessBuilder$Redirect, name, initialize, &_ProcessBuilder$Redirect_ClassInfo_, clinit$ProcessBuilder$Redirect, allocate$ProcessBuilder$Redirect);
	return class$;
}

$Class* ProcessBuilder$Redirect::class$ = nullptr;

	} // lang
} // java