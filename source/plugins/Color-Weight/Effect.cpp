#include "Effect.h"
#include "_config.h"
#include "_shader.h"
using namespace ffglex;

static ffglqs::PluginInstance p = ffglqs::Effect::CreatePlugin< Effect >({ 
		PLUGIN_ID,
		PLUGIN_NAME 
	} );

Effect::Effect()
{
	SetFragmentShader( fshader );
	//AddRGBColorParam( "weight" );
	//SetParamDisplayName( 0, "Red", true );
	//SetParamDisplayName( 1, "Green", true );
	//SetParamDisplayName( 2, "Blue", true );

	AddParam( ffglqs::ParamRange::Create( "u_red", 0.0f, ffglqs::ParamRange::Range( 0.0f, 1.0f ) ) );
	AddParam( ffglqs::ParamRange::Create( "u_green", 0.0f, ffglqs::ParamRange::Range( 0.0f, 1.0f ) ) );
	AddParam( ffglqs::ParamRange::Create( "u_blue", 0.0f, ffglqs::ParamRange::Range( 0.0f, 1.0f ) ) );
	
	SetParamDisplayName( 0, "Red", true );
	SetParamDisplayName( 1, "Green", true );
	SetParamDisplayName( 2, "Blue", true );

}

Effect::~Effect()
{
}