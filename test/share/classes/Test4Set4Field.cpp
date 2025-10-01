#include <Test4Set4Field.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;

$FieldInfo _Test4Set4Field_FieldInfo_[] = {
	{"i", "I", nullptr, $PRIVATE | $FINAL, $field(Test4Set4Field, i)},
	{"o", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Test4Set4Field, o)},
	{"ni", "I", nullptr, $PUBLIC | $FINAL, $field(Test4Set4Field, ni)},
	{"no", "Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $field(Test4Set4Field, no)},
	{"vi", "I", nullptr, $PUBLIC | $VOLATILE, $field(Test4Set4Field, vi)},
	{"vo", "Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE, $field(Test4Set4Field, vo)},
	{"si", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test4Set4Field, si)},
	{"so", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test4Set4Field, so)},
	{}
};

$MethodInfo _Test4Set4Field_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test4Set4Field::*)()>(&Test4Set4Field::init$))},
	{"testAccessibleObject", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{"testAccessiblePrimitive", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{"testAccessibleStaticObject", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{"testAccessibleStaticPrimitive", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{"testObject", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{"testPrimitive", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{"testStaticObject", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{"testStaticPrimitive", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{"testVolatileObject", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{"testVolatilePrimitive", "()Z", nullptr, 0, nullptr, "java.lang.NoSuchFieldException"},
	{}
};

$ClassInfo _Test4Set4Field_ClassInfo_ = {
	$ACC_SUPER,
	"Test4Set4Field",
	"java.lang.Object",
	nullptr,
	_Test4Set4Field_FieldInfo_,
	_Test4Set4Field_MethodInfo_
};

$Object* allocate$Test4Set4Field($Class* clazz) {
	return $of($alloc(Test4Set4Field));
}

$Object* Test4Set4Field::so = nullptr;

void Test4Set4Field::init$() {
	this->i = 911;
	this->ni = this->i;
	this->vi = this->i;
	$set(this, o, $new($Object));
	$set(this, no, this->o);
	$set(this, vo, this->o);
}

bool Test4Set4Field::testPrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("ni"_s));
		$nc(f)->setInt(this, 7);
		if (this->ni != 7) {
			$init($System);
			$nc($System::out)->println("setInt() did not work"_s);
		}
		return false;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testStaticPrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("si"_s));
		$nc(f)->setInt(this, 13);
		{
			$init($System);
			$nc($System::out)->println("setInt() did not work for static"_s);
		}
		return false;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testObject() {
	$beforeCallerSensitive();
	$var($Object, saved, this->no);
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("no"_s));
		$nc(f)->set(this, $$new($Object));
		if ($equals(this->no, saved)) {
			$init($System);
			$nc($System::out)->println("set() did not work"_s);
		}
		return false;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testStaticObject() {
	$beforeCallerSensitive();
	$var($Object, saved, Test4Set4Field::so);
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("so"_s));
		$nc(f)->set(this, $$new($Object));
		if ($equals(Test4Set4Field::so, saved)) {
			$init($System);
			$nc($System::out)->println("set() did not work for static"_s);
		}
		return false;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testAccessiblePrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("i"_s));
		$nc(f)->setAccessible(true);
		f->setInt(this, 7);
		if (this->i != 7) {
			$init($System);
			$nc($System::out)->println("setInt() did not work"_s);
		}
		return true;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testAccessibleStaticPrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("si"_s));
		$nc(f)->setAccessible(true);
		f->setInt(this, 13);
		{
			$init($System);
			$nc($System::out)->println("setInt() did not work for static"_s);
		}
		return false;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testAccessibleObject() {
	$beforeCallerSensitive();
	$var($Object, saved, this->o);
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("o"_s));
		$nc(f)->setAccessible(true);
		f->set(this, $$new($Object));
		if ($equals(this->o, saved)) {
			$init($System);
			$nc($System::out)->println("set() did not work"_s);
		}
		return true;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testAccessibleStaticObject() {
	$beforeCallerSensitive();
	$var($Object, saved, Test4Set4Field::so);
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("so"_s));
		$nc(f)->setAccessible(true);
		f->set(this, $$new($Object));
		if ($equals(Test4Set4Field::so, saved)) {
			$init($System);
			$nc($System::out)->println("set() did not work for static"_s);
		}
		return false;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testVolatilePrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("vi"_s));
		$nc(f)->setAccessible(true);
		f->setInt(this, 7);
		if (this->vi != 7) {
			$init($System);
			$nc($System::out)->println("setInt() did not work"_s);
		}
		return true;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testVolatileObject() {
	$beforeCallerSensitive();
	$var($Object, saved, this->vo);
	try {
		$var($Field, f, $of(this)->getClass()->getDeclaredField("vo"_s));
		$nc(f)->setAccessible(true);
		f->set(this, $$new($Object));
		if ($equals(this->vo, saved)) {
			$init($System);
			$nc($System::out)->println("set() did not work"_s);
		}
		return true;
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		return false;
	}
	$shouldNotReachHere();
}

void clinit$Test4Set4Field($Class* class$) {
	$assignStatic(Test4Set4Field::so, $new($Object));
}

Test4Set4Field::Test4Set4Field() {
}

$Class* Test4Set4Field::load$($String* name, bool initialize) {
	$loadClass(Test4Set4Field, name, initialize, &_Test4Set4Field_ClassInfo_, clinit$Test4Set4Field, allocate$Test4Set4Field);
	return class$;
}

$Class* Test4Set4Field::class$ = nullptr;