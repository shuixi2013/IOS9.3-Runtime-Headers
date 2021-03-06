//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface TSDGLShader : NSObject
{
    NSMutableDictionary *_uniforms;
    NSMutableSet *_uniformsNeedingUpdate;
    NSMutableDictionary *_attributeLocations;
    _Bool _isActive;
    unsigned int _programObject;
    NSString *_name;
}

+ (id)defaultVelocityVisualizerFragmentShaderString;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) unsigned int programObject; // @synthesize programObject=_programObject;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)validateUniforms;
- (void)deactivate;
- (void)activate;
- (void)p_setQualifiersIfNecessary;
- (int)locationForAttribute:(id)arg1;
- (int)locationForUniform:(id)arg1;
- (void)setMat4WithTransform3D:(struct CATransform3D)arg1 forUniform:(id)arg2;
- (void)setMat4WithTransform3D:(struct CATransform3D)arg1 forShaderQualifier:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform)arg1 forUniform:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform)arg1 forShaderQualifier:(id)arg2;
- (void)setColor:(CDStruct_f2e236b6)arg1 forUniform:(id)arg2;
- (void)setColor:(CDStruct_f2e236b6)arg1 forShaderQualifier:(id)arg2;
- (void)setPoint4D:(CDStruct_f2e236b6)arg1 forUniform:(id)arg2;
- (void)setPoint4D:(CDStruct_f2e236b6)arg1 forShaderQualifier:(id)arg2;
- (void)setPoint3D:(CDStruct_03942939)arg1 forUniform:(id)arg2;
- (void)setPoint3D:(CDStruct_03942939)arg1 forShaderQualifier:(id)arg2;
- (void)setLifeSpan:(CDStruct_6e3f967a)arg1 forUniform:(id)arg2;
- (void)setLifeSpan:(CDStruct_6e3f967a)arg1 forShaderQualifier:(id)arg2;
- (void)setPoint2D:(CDStruct_6e3f967a)arg1 forUniform:(id)arg2;
- (void)setPoint2D:(CDStruct_6e3f967a)arg1 forShaderQualifier:(id)arg2;
- (void)setCGFloat:(double)arg1 forUniform:(id)arg2;
- (void)setCGFloat:(double)arg1 forShaderQualifier:(id)arg2;
- (void)setGLFloat:(float)arg1 forUniform:(id)arg2;
- (void)setGLFloat:(float)arg1 forShaderQualifier:(id)arg2;
- (void)setInteger:(long long)arg1 forUniform:(id)arg2;
- (void)setGLint:(int)arg1 forUniform:(id)arg2;
- (void)setInteger:(long long)arg1 forShaderQualifier:(id)arg2;
- (void)setGLint:(int)arg1 forShaderQualifier:(id)arg2;
- (id)p_qualifierForUniform:(id)arg1 class:(Class)arg2;
- (id)shaderQualifierForUniform:(id)arg1 type:(long long)arg2;
- (_Bool)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3;
- (_Bool)p_compileShader:(unsigned int *)arg1 withType:(unsigned int)arg2 shaderString:(id)arg3 defines:(id)arg4;
- (id)description;
- (void)dealloc;
- (void)teardown;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 uniforms:(id)arg3 attributes:(id)arg4 defines:(id)arg5;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2;
- (id)initWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2 bundle:(id)arg3 uniforms:(id)arg4 attributes:(id)arg5 defines:(id)arg6;
- (id)p_contentsOfShader:(id)arg1 extension:(id)arg2 bundle:(id)arg3;
- (id)initWithShaderFileName:(id)arg1 bundle:(id)arg2 uniforms:(id)arg3 attributes:(id)arg4 defines:(id)arg5;
- (id)initWithShaderFileName:(id)arg1 bundle:(id)arg2;
- (id)initWithDefaultUniformMotionBlurShader;
- (id)initWithDefaultHorizontalBlurShader;
- (id)initWithDefaultVerticalBlurShader;
- (id)initWithDefaultVelocityVisualizerShader;
- (id)initWithDefaultVelocityCollectionShader;
- (id)initWithDefaultVelocityMeshShader;
- (id)initWithDefaultVelocityShader;
- (id)initWithDefaultRandomColorTextureShader;
- (id)initWithDefaultRandomColorShader;
- (id)initWithDefaultTextureAndOpacityShader;
- (id)initWithDefaultTextureCoordinatesShader;
- (id)initWithDefaultTextureShader;

@end

