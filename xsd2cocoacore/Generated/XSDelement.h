/*
 XSDelement.h
 The interface definition of properties and methods for the XSDelement object.
 Generated by SudzC.com
 */


#import "XSSchemaNode.h"

@class XSDcomplexType;
@protocol XSType;

@interface XSDelement : XSSchemaNode
{
//	XSDlocalSimpleType* _simpleType;
	XSDcomplexType* localComplexType;
    NSString* _name;
	NSString* _type;
	NSString* _substitutionGroup;
	NSString* _default;
	NSString* _fixed;
	NSString* _nillable;
	NSString* _abstract;
	NSString* _final;
	NSString* _block;
	NSString* _form;
	NSNumber* minOccurs;
    NSNumber* maxOccurs;
}

//@property (retain, nonatomic) XSDlocalSimpleType* simpleType;
@property (strong, nonatomic) XSDcomplexType* localComplexType;
@property (strong, nonatomic) NSString* name;
@property (strong, nonatomic) NSString* type;
@property (strong, nonatomic) NSString* substitutionGroup;
@property (strong, nonatomic) NSString* defaultValue;
@property (strong, nonatomic) NSString* fixed;
@property (strong, nonatomic) NSString* nillable;
@property (strong, nonatomic) NSString* abstractValue;
@property (strong, nonatomic) NSString* final;
@property (strong, nonatomic) NSString* block;
@property (strong, nonatomic) NSString* form;
@property (strong, nonatomic) NSNumber* minOccurs;
@property (strong, nonatomic) NSNumber* maxOccurs;

- (NSString*) readTemplate;
- (NSString*) variableName;

- (BOOL) isSingleValue;

- (id<XSType>) schemaType;
- (NSString*) objcType;

- (id) initWithNode: (NSXMLElement*) node schema: (XSDschema*) schema;
@end
