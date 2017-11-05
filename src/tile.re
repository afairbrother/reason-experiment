let component = ReasonReact.statelessComponent("Tile");

let make = (~title="TileTitle", _children) => {
    ...component,
    render: (_self) =>
    <div className="tile">
        <h3>(ReasonReact.stringToElement(title))</h3>
    </div>
}
