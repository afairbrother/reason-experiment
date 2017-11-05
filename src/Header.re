[%bs.raw {|require('./header.css')|}];

let component = ReasonReact.statelessComponent("Header");


let make = (_children) => {
    ...component,
    render: (_self) => {
        <div className="header">
                
        </div>
    }
}
