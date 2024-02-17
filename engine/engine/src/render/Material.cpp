#include "StdAfx.h"
#include "render/Material.h"

namespace engine
{
	//std::future<MaterialGeneric::LoadResult> MaterialGeneric::Load(const MaterialGeneric& i_material, const Context& i_engineContext)
	//{
	//	
	//}
	//
	//std::future<MaterialGeneric::LoadResult> MaterialGeneric::LoadData(const MaterialGeneric& i_material, const Context& i_engineContext)
	//{
	//	//i_engineContext.GetAssetProvider().L
	//}

	//LoadVisual es marca, �nicament un flag de que es vol carregar, i al RENDER, ya si eso, es comen�a

	MaterialGeneric::MaterialGeneric(std::shared_ptr<Asset<ShaderAssetVertex>> i_vertexShader, std::shared_ptr<Asset<ShaderAssetFragment>> i_fragmentShader)
		: m_vertexShader(std::move(i_vertexShader))
		, m_fragmentShader(std::move(i_fragmentShader))
	{

	}

	MaterialGeneric::~MaterialGeneric()
	{

	}

	std::span<std::shared_ptr<Asset<void>>> MaterialGeneric::GetAssets() const
	{
		return std::span<std::shared_ptr<Asset<void>>>((std::shared_ptr<Asset<void>>*) & m_vertexShader, 2);
	}


	const std::optional<std::string> MaterialGeneric::GetVertexShaderCode() const
	{
		return m_vertexShader.get()->GetData();
		//return std::nullopt;
	}

	const std::optional<std::string> MaterialGeneric::GetFragmentShaderCode() const
	{
		return m_fragmentShader.get()->GetData();
		//return std::nullopt;
	}
}
