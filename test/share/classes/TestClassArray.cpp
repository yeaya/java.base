#include <TestClassArray.h>

#include <java/io/Serializable.h>
#include <jcpp.h>

using $ObjectArray3 = $Array<::java::lang::Object, 3>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Readable = ::java::lang::Readable;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestClassArray_Attribute_var$0[] = {
	{"value", 's', "extends"},
	{}
};

$NamedAttribute TestClassArray_Attribute_var$1[] = {
	{"value", 's', "extends2"},
	{}
};

$NamedAttribute TestClassArray_Attribute_var$2[] = {
	{"value", 's', "implements serializable"},
	{}
};

$NamedAttribute TestClassArray_Attribute_var$3[] = {
	{"value", 's', "implements2 serializable"},
	{}
};

$NamedAttribute TestClassArray_Attribute_var$4[] = {
	{"value", 's', "implements cloneable"},
	{}
};

$NamedAttribute TestClassArray_Attribute_var$5[] = {
	{"value", 's', "implements2 cloneable"},
	{}
};

$TypeAnnotation _TestClassArray_TypeAnnotations_[] = {
	{"LTypeAnno;", TestClassArray_Attribute_var$0, "CLASS_EXTENDS, type_index = 65535"},
	{"LTypeAnno2;", TestClassArray_Attribute_var$1, "CLASS_EXTENDS, type_index = 65535"},
	{"LTypeAnno;", TestClassArray_Attribute_var$2, "CLASS_EXTENDS, type_index = 0"},
	{"LTypeAnno2;", TestClassArray_Attribute_var$3, "CLASS_EXTENDS, type_index = 0"},
	{"LTypeAnno;", TestClassArray_Attribute_var$4, "CLASS_EXTENDS, type_index = 2"},
	{"LTypeAnno2;", TestClassArray_Attribute_var$5, "CLASS_EXTENDS, type_index = 2"},
	{}
};

$NamedAttribute TestClassArray_Attribute_var$6[] = {
	{"value", 's', "return1"},
	{}
};

$NamedAttribute TestClassArray_Attribute_var$7[] = {
	{"value", 's', "return3"},
	{}
};

$NamedAttribute TestClassArray_Attribute_var$8[] = {
	{"value", 's', "return4"},
	{}
};

$TypeAnnotation _TestClassArray_MethodTypeAnnotations_foo1[] = {
	{"LTypeAnno;", TestClassArray_Attribute_var$6, "METHOD_RETURN"},
	{"LTypeAnno;", TestClassArray_Attribute_var$7, "METHOD_RETURN, location = (ARRAY,ARRAY)"},
	{"LTypeAnno;", TestClassArray_Attribute_var$8, "METHOD_RETURN, location = (ARRAY,ARRAY,ARRAY)"},
	{}
};

$MethodInfo _TestClassArray_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestClassArray::*)()>(&TestClassArray::init$))},
	{"foo", "()[[[Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, nullptr, _TestClassArray_MethodTypeAnnotations_foo1},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TestClassArray_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"TestClassArray",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Readable,java.lang.Cloneable",
	nullptr,
	_TestClassArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_TestClassArray_TypeAnnotations_
};

$Object* allocate$TestClassArray($Class* clazz) {
	return $of($alloc(TestClassArray));
}

int32_t TestClassArray::hashCode() {
	 return this->$Serializable::hashCode();
}

bool TestClassArray::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

$Object* TestClassArray::clone() {
	 return this->$Serializable::clone();
}

$String* TestClassArray::toString() {
	 return this->$Serializable::toString();
}

void TestClassArray::finalize() {
	this->$Serializable::finalize();
}

void TestClassArray::init$() {
}

$ObjectArray3* TestClassArray::foo() {
	return nullptr;
}

TestClassArray::TestClassArray() {
}

$Class* TestClassArray::load$($String* name, bool initialize) {
	$loadClass(TestClassArray, name, initialize, &_TestClassArray_ClassInfo_, allocate$TestClassArray);
	return class$;
}

$Class* TestClassArray::class$ = nullptr;