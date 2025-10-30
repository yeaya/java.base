#include <java/lang/invoke/TypeDescriptor$OfMethod.h>

#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeDescriptor$OfFieldArray = $Array<::java::lang::invoke::TypeDescriptor$OfField>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeDescriptor = ::java::lang::invoke::TypeDescriptor;
using $TypeDescriptor$OfField = ::java::lang::invoke::TypeDescriptor$OfField;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _TypeDescriptor$OfMethod_MethodInfo_[] = {
	{"changeParameterType", "(ILjava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;", "(ITF;)TM;", $PUBLIC | $ABSTRACT},
	{"changeReturnType", "(Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;", "(TF;)TM;", $PUBLIC | $ABSTRACT},
	{"dropParameterTypes", "(II)Ljava/lang/invoke/TypeDescriptor$OfMethod;", "(II)TM;", $PUBLIC | $ABSTRACT},
	{"insertParameterTypes", "(I[Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;", "(I[TF;)TM;", $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"parameterArray", "()[Ljava/lang/invoke/TypeDescriptor$OfField;", "()[TF;", $PUBLIC | $ABSTRACT},
	{"parameterCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"parameterList", "()Ljava/util/List;", "()Ljava/util/List<TF;>;", $PUBLIC | $ABSTRACT},
	{"parameterType", "(I)Ljava/lang/invoke/TypeDescriptor$OfField;", "(I)TF;", $PUBLIC | $ABSTRACT},
	{"returnType", "()Ljava/lang/invoke/TypeDescriptor$OfField;", "()TF;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TypeDescriptor$OfMethod_InnerClassesInfo_[] = {
	{"java.lang.invoke.TypeDescriptor$OfMethod", "java.lang.invoke.TypeDescriptor", "OfMethod", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.invoke.TypeDescriptor$OfField", "java.lang.invoke.TypeDescriptor", "OfField", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TypeDescriptor$OfMethod_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.invoke.TypeDescriptor$OfMethod",
	nullptr,
	"java.lang.invoke.TypeDescriptor",
	nullptr,
	_TypeDescriptor$OfMethod_MethodInfo_,
	"<F::Ljava/lang/invoke/TypeDescriptor$OfField<TF;>;M::Ljava/lang/invoke/TypeDescriptor$OfMethod<TF;TM;>;>Ljava/lang/Object;Ljava/lang/invoke/TypeDescriptor;",
	nullptr,
	_TypeDescriptor$OfMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.TypeDescriptor"
};

$Object* allocate$TypeDescriptor$OfMethod($Class* clazz) {
	return $of($alloc(TypeDescriptor$OfMethod));
}

$Class* TypeDescriptor$OfMethod::load$($String* name, bool initialize) {
	$loadClass(TypeDescriptor$OfMethod, name, initialize, &_TypeDescriptor$OfMethod_ClassInfo_, allocate$TypeDescriptor$OfMethod);
	return class$;
}

$Class* TypeDescriptor$OfMethod::class$ = nullptr;

		} // invoke
	} // lang
} // java