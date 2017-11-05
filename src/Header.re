[%bs.raw {|require('./header.css')|}];

let component = ReasonReact.statelessComponent("Header");


let make = (_children) => {
    ...component,
    render: (_self) => {
        <div className="header">
            <h1>(ReasonReact.stringToElement("Header"))</h1>
            <a href="http://github.com/afairbrother">
                <span className="fa fa-github" />
            </a>
        </div>
    }
}
