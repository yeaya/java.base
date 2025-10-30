#include <Duped$Echo.h>

#include <Duped.h>
#include <java/io/InputStream.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $Duped = ::Duped;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _Duped$Echo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Duped$Echo::*)()>(&Duped$Echo::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Duped$Echo::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Duped$Echo_InnerClassesInfo_[] = {
	{"Duped$Echo", "Duped", "Echo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Duped$Echo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Duped$Echo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Duped$Echo_MethodInfo_,
	nullptr,
	nullptr,
	_Duped$Echo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Duped"
};

$Object* allocate$Duped$Echo($Class* clazz) {
	return $of($alloc(Duped$Echo));
}

void Duped$Echo::init$() {
}

void Duped$Echo::main($StringArray* args) {
	$var($StringBuffer, s, $new($StringBuffer));
	int32_t c = 0;
	while ((c = $nc($System::in)->read()) != -1) {
		s->append((char16_t)c);
	}
	$nc($System::out)->println($of(s));
}

Duped$Echo::Duped$Echo() {
}

$Class* Duped$Echo::load$($String* name, bool initialize) {
	$loadClass(Duped$Echo, name, initialize, &_Duped$Echo_ClassInfo_, allocate$Duped$Echo);
	return class$;
}

$Class* Duped$Echo::class$ = nullptr;